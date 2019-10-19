//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachedSnapchatter-Protocol.h"

@class NSString;

@interface SCCachedSnapchatter : NSObject <SCCachedSnapchatter>
{
    _Bool _exists;
    NSString *_username;
    NSString *_displayName;
    long long _lastFetchedTimestamp;
}

@property(readonly, nonatomic) long long lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) _Bool exists; // @synthesize exists=_exists;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExists:(_Bool)arg1 username:(id)arg2 displayName:(id)arg3 lastFetchedTimestamp:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

