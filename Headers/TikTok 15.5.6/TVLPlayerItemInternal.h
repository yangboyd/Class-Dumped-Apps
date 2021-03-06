//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, TVLPlayerItemPreferences;

@interface TVLPlayerItemInternal : NSObject
{
}

- (void)cancel;
- (void)requestItemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)URLWithPreferences:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *URI; // @dynamic URI;
@property(readonly, nonatomic) NSURL *currentURL; // @dynamic currentURL;
@property(retain, nonatomic) TVLPlayerItemPreferences *preferences; // @dynamic preferences;
@property(readonly, copy, nonatomic) NSArray *supportedPreferences; // @dynamic supportedPreferences;

@end

