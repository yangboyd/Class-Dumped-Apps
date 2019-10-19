//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesSnapViewStatus : NSObject <NSCopying>
{
    _Bool _viewed;
    _Bool _screenshotted;
    _Bool _saved;
}

@property(readonly, nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(readonly, nonatomic) _Bool screenshotted; // @synthesize screenshotted=_screenshotted;
@property(readonly, nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewed:(_Bool)arg1 screenshotted:(_Bool)arg2 saved:(_Bool)arg3;

@end

