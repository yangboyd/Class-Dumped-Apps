//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseOptional, JBTDNetworkNetworkException_ErrorType;

@interface JBTDNetworkNetworkException_Builder : NSObject
{
    JBTDNetworkNetworkException_ErrorType *type_;
    ComGoogleCommonBaseOptional *requestPath_;
    ComGoogleCommonBaseOptional *message_;
    ComGoogleCommonBaseOptional *cause_;
}

- (void)dealloc;
- (id)build;
- (id)buildFromStatusCodeWithInt:(int)arg1;
- (id)causeWithJavaLangThrowable:(id)arg1;
- (id)messageWithNSString:(id)arg1;
- (id)requestPathWithNSString:(id)arg1;
- (id)requestUriWithComGoogleAppsXplatNetUri:(id)arg1;
- (id)typeWithJBTDNetworkNetworkException_ErrorType:(id)arg1;

@end

