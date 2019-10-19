//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerBoltResult-Protocol.h"

@class NSString, NSURL;

@interface SCBoltContentResolveResult : NSObject <SCNContentManagerBoltResult>
{
    NSURL *_optimalURL;
    NSURL *_fallbackURL;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
- (id)getSecondaryRequestURL;
- (id)getOptimalRequestURL;
- (id)getErrorMessage;
- (id)initWithErrorMessage:(id)arg1;
- (id)initWithOptimalURL:(id)arg1 fallbackURL:(id)arg2;

@end

