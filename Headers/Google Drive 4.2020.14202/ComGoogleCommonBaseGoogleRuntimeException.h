//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangRuntimeException.h"

@class NSString;

@interface ComGoogleCommonBaseGoogleRuntimeException : JavaLangRuntimeException
{
    NSString *internalMessage_;
    NSString *externalMessage_;
}

- (void)dealloc;
- (id)getMessage;
- (void)setExternalMessageWithNSString:(id)arg1;
- (id)getExternalMessage;
- (void)setInternalMessageWithNSString:(id)arg1;
- (id)getInternalMessage;
- (id)initWithComGoogleCommonBaseGoogleException:(id)arg1;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)init;

@end

