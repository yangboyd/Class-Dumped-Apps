//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGBloksOpenCommentsArgs : NSObject
{
    _Bool _isPermalinkEnabled;
    _Bool _hideEmojiBar;
    NSString *_mediaId;
    long long _scrollBehavior;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hideEmojiBar; // @synthesize hideEmojiBar=_hideEmojiBar;
@property(readonly, nonatomic) _Bool isPermalinkEnabled; // @synthesize isPermalinkEnabled=_isPermalinkEnabled;
@property(readonly, nonatomic) long long scrollBehavior; // @synthesize scrollBehavior=_scrollBehavior;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)initWithBloksModel:(id)arg1;

@end

