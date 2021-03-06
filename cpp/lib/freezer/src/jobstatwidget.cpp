
/* $Author$
 * $LastChangedDate: 2007-06-19 04:27:47 +1000 (Tue, 19 Jun 2007) $
 * $Rev: 4632 $
 * $HeadURL: svn://svn.blur.com/blur/branches/concurrent_burn/cpp/lib/assfreezer/src/jobstatwidget.cpp $
 */

#include <qsqlquery.h>
#include <qsqlrecord.h>

#include "jobstatwidget.h"

#include "database.h"
#include "freezercore.h"

JobStatWidget::JobStatWidget( QWidget * parent )
: QTreeWidget( parent )
{
	setAlternatingRowColors(true);
	setHeaderLabels( QStringList() << "Statistic" << "Value" );
	setRootIsDecorated( false );
}

void JobStatWidget::setJobs( const JobList & jobs )
{
	mJobs = jobs;
	refresh();
}

JobList JobStatWidget::jobs() const
{
	return mJobs;
}

struct field_name_map { const char * field, * name; bool child; };

field_name_map name_map [] =
{
	{ "totaltime", "Total Machine Time", false },
	{ "totaltasktime", "Successful Task Time", false },
	{ "mintasktime", "Minimum", true },
	{ "avgtasktime", "Average", true },
	{ "maxtasktime", "Maximum", true },
	{ "taskcount", "Tasks Finished", true },
	{ "totalerrortime", "Error Time", false },
	{ "avgerrortime", "Average", true },
	{ "errorcount", "Error Count", true },
	{ "totalcanceltime", "Cancel Time", false },
	{ "avgcanceltime", "Average", true },
	{ "cancelcount", "Cancel Count", true },
	{ "totalcopytime", "Copy Time", false },
	{ "avgcopytime", "Average", true },
	{ "totalloadtime", "Successful Load Time", false },
	{ "avgloadtime", "Average", true },
	{ 0, 0, false }
};

void JobStatWidget::refresh()
{
	clear();
	bool firstRound = true;
	QList<QTreeWidgetItem*> items;
	int column = 1;
	QStringList headers;
	headers << "Statistic";

	foreach( Job j, mJobs ) {
		headers << j.name();
		QSqlQuery q = Database::current()->exec( "SELECT * FROM Job_GatherStats_2(" + QString::number(j.key()) + ");" );
		int row = 0;
		if( q.next() ) {
			QSqlRecord r = q.record();
			QTreeWidgetItem * last = 0;
			for(int i=0; name_map[i].field; i++ ) {
				QStringList data;
				data << QString::fromLatin1(name_map[i].name) << r.value( QString::fromLatin1(name_map[i].field ) ).toString().section(".",0,0);
				if( firstRound ) {
					if( last && name_map[i].child )
						items += new QTreeWidgetItem( last, data );
					else {
						last = new QTreeWidgetItem( this, data );
						items += last;
						setItemExpanded( last, true );
					}
				} else {
					QTreeWidgetItem * item = items[row];
					item->setText( column, data[1] );
				}
				row++;
			}
		}
		column++;
		firstRound = false;
	}
	setHeaderLabels( headers );
	resizeColumnToContents(0);
}
