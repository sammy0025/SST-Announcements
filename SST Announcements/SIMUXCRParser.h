//
//  SIMUXParser.h
//  XMLSinglePostParser
//
//  Created by Pan Ziyue on 14/9/13.
//  Copyright (c) 2013 Pan Ziyue. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SIMUXCRParser : NSObject <NSXMLParserDelegate>

-(NSString*)convertHTML:(NSString*)HTMLString;

@end
