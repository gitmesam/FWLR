//
//  ViewController.h
//  Lecture 2
//
//  Created by Sem Voigtländer on 10/01/2018.
//  Copyright © 2018 Jailed Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IOServiceTVController.h"
@interface IOServiceTVController : UITableViewController<UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) NSArray* IOServices;
@end

