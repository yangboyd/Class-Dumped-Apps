//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TIKTOKMutualListDataProtocol <NSObject>
@property(readonly, nonatomic) long long total;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, copy, nonatomic) NSString *secUserID;
@property(readonly, nonatomic) long long mutualType;
- (id)initWithSecUserID:(NSString *)arg1 mutualType:(long long)arg2;
@end

