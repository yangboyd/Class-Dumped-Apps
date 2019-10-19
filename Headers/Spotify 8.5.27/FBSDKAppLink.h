//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface FBSDKAppLink : NSObject
{
    _Bool _backToReferrer;
    NSURL *_sourceURL;
    NSArray *_targets;
    NSURL *_webURL;
}

+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(_Bool)arg4;
@property(nonatomic, getter=isBackToReferrer) _Bool backToReferrer; // @synthesize backToReferrer=_backToReferrer;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)initWithIsBackToReferrer:(_Bool)arg1;

@end

