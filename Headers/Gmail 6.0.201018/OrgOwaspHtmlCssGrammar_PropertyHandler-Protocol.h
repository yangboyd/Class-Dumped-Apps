//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;

@protocol OrgOwaspHtmlCssGrammar_PropertyHandler <JavaObject>
- (void)endProperty;
- (void)endFunctionWithNSString:(NSString *)arg1;
- (void)startFunctionWithNSString:(NSString *)arg1;
- (void)punctuationWithNSString:(NSString *)arg1;
- (void)urlWithNSString:(NSString *)arg1;
- (void)quotedStringWithNSString:(NSString *)arg1;
- (void)hash__WithNSString:(NSString *)arg1;
- (void)identifierWithNSString:(NSString *)arg1;
- (void)quantityWithNSString:(NSString *)arg1;
- (void)startPropertyWithNSString:(NSString *)arg1;
@end

