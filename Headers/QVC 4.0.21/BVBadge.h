//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BVBadge : NSObject
{
    long long _badgeType;
    NSString *_identifier;
    NSString *_contentType;
}

@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property long long badgeType; // @synthesize badgeType=_badgeType;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;

@end

