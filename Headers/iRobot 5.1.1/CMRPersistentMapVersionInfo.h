//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRPersistentMapVersionInfo : NSObject
{
    _Bool _canBeSmartMap;
    int _lastUpdatedTimeStamp;
    NSString *_pmapId;
    NSString *_pmapVersionId;
}

+ (id)PersistentMapVersionInfoWithPmapId:(id)arg1 pmapVersionId:(id)arg2 lastUpdatedTimeStamp:(int)arg3 canBeSmartMap:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canBeSmartMap; // @synthesize canBeSmartMap=_canBeSmartMap;
@property(readonly, nonatomic) int lastUpdatedTimeStamp; // @synthesize lastUpdatedTimeStamp=_lastUpdatedTimeStamp;
@property(readonly, nonatomic) NSString *pmapVersionId; // @synthesize pmapVersionId=_pmapVersionId;
@property(readonly, nonatomic) NSString *pmapId; // @synthesize pmapId=_pmapId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPmapId:(id)arg1 pmapVersionId:(id)arg2 lastUpdatedTimeStamp:(int)arg3 canBeSmartMap:(_Bool)arg4;

@end

