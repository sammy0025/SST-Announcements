//
//  WebViewController.h
//  SST Announcements
//
//  Created by Pan Ziyue on 27/5/13.
//  Copyright (c) 2013 Pan Ziyue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSEntry.h"

@class RSSEntry;

@interface WebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic) NSURL *url1;

@end
