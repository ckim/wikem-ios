//
//  NotesTableViewController2.h
//  emnotes
//
//  Created by Busby on 12/10/11.
 //very similar but uses full text search. somehwat redundant but not much code here anyways


#import <UIKit/UIKit.h>
#import "CoreDataTableViewController.h"
#import "Category.h"

#import "IkhoyoDatabase.h"

@interface NotesTableViewController2 : CoreDataTableViewController {
    NSMutableArray* rows;

}
@property (nonatomic,retain) NSMutableArray* rows;

@property (retain) UITabBarItem *tabBarItem;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property BOOL isTyping;
@property (nonatomic, retain) IkhoyoDatabase* db;

 
- (id)initWithStyle:(UITableViewStyle)style inManagedContext:(NSManagedObjectContext *)context withCategory:(Category *)category;
- (void)loaddb;
- (void) openDatabase:(NSString*) path;

@end
