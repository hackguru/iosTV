//
//  SidebarTableViewController.h
//  SidebarDemo
//
//  Created by Simon Ng on 10/11/14.
//  Copyright (c) 2014 AppCoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SidebarTableViewController : UITableViewController <NSURLConnectionDelegate>
@property (retain, nonatomic) NSMutableData *apiReturnData;
@end
