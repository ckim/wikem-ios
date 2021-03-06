//
//  CategoryTableViewController.h
//  TabViewTest
//
//  Created by Sabin Dang on 4/1/11.
//  Copyright 2011 sabindang.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTableViewController.h"
#import "NotesTableViewController.h"

@interface CategoryTableViewController : CoreDataTableViewController {
    NotesTableViewController *notesTableViewController;
    
}

@property (nonatomic, retain) NotesTableViewController *notesTableViewController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (retain) UITabBarItem *tabBarItem;


- (id)initWithStyle:(UITableViewStyle)style inManagedContext:(NSManagedObjectContext *)context;

@end
