//
//  NSString+ZYChangeCode.h
//  ereader
//
//  Created by 周洋 on 15/4/17.
//  Copyright (c) 2015年 YOUNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ZYChangeCode)
-(NSString*)toTraditionString;
-(NSString*)toSimpleString;
-(NSString *)autoChange;
@end
