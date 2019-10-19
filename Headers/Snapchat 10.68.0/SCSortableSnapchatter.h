//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCSortableEntity-Protocol.h"

@class NSString, SCSnapchatter;

@interface SCSortableSnapchatter : NSObject <SCSortableEntity, NSCopying>
{
    SCSnapchatter *_snapchatter;
    NSString *_sortingKey;
    NSString *_sanitizedString;
}

@property(readonly, copy, nonatomic) NSString *sanitizedString; // @synthesize sanitizedString=_sanitizedString;
@property(readonly, copy, nonatomic) NSString *sortingKey; // @synthesize sortingKey=_sortingKey;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 sortingKey:(id)arg2 sanitizedString:(id)arg3;
- (id)initWithSnapchatter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

