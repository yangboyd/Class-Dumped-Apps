//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgOwaspHtmlCssGrammar_PropertyHandler-Protocol.h"

@class JavaLangStringBuilder, NSString, OrgOwaspHtmlCssSchema_Property, OrgOwaspHtmlStylingPolicy;
@protocol JavaUtilList;

@interface OrgOwaspHtmlStylingPolicy_1 : NSObject <OrgOwaspHtmlCssGrammar_PropertyHandler>
{
    OrgOwaspHtmlStylingPolicy *this$0_;
    JavaLangStringBuilder *val$sanitizedCss_;
    OrgOwaspHtmlCssSchema_Property *cssProperty_;
    id <JavaUtilList> cssProperties_;
    int propertyStart_;
    _Bool hasTokens_;
    _Bool inQuotedIdents_;
    NSString *lastToken_;
}

- (void)dealloc;
- (void)endFunctionWithNSString:(id)arg1;
- (void)endProperty;
- (void)hash__WithNSString:(id)arg1;
- (void)identifierWithNSString:(id)arg1;
- (void)punctuationWithNSString:(id)arg1;
- (void)quantityWithNSString:(id)arg1;
- (void)quotedStringWithNSString:(id)arg1;
- (void)startFunctionWithNSString:(id)arg1;
- (void)startPropertyWithNSString:(id)arg1;
- (void)urlWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

