//
//  WebViewController.h
//  SST Announcements
//
//  Created by Pan Ziyue on 27/5/13.
//  Copyright (c) 2013 Pan Ziyue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTCoreText.h"

@interface WebViewController : UIViewController <UIGestureRecognizerDelegate, DTAttributedTextContentViewDelegate, DTLazyImageViewDelegate>
{
    IBOutlet DTAttributedTextView *textView;
}

@property (strong, nonatomic) IBOutlet DTAttributedTextView *textView;
@property (copy, nonatomic) NSString *receivedURL;
//@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
