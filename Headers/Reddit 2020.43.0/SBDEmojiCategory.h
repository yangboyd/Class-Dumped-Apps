//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SBDEmojiCategory : NSObject
{
    long long _cid;
    NSString *_name;
    NSString *_url;
    NSArray *_emojis;
}

@property(retain) NSArray *emojis; // @synthesize emojis=_emojis;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *name; // @synthesize name=_name;
@property long long cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

