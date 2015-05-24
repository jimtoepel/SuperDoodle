//
//  Document.h
//  SuperDoodle
//
//  Created by Jim Toepel on 5/21/15.
//  Copyright (c) 2015 FunderDevelopment. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument
    <NSTableViewDataSource>

@property (nonatomic) NSMutableArray *tasks;

@property (nonatomic) IBOutlet NSTableView *taskTable;

- (IBAction)addTask:(id)sender;


@end

