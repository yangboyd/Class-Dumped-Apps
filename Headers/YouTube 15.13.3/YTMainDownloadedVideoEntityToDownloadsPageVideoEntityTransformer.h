//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEntityTransformerProtocol-Protocol.h"

@class GIMMe, NSString;
@protocol YTEntityStore;

@interface YTMainDownloadedVideoEntityToDownloadsPageVideoEntityTransformer : NSObject <YTEntityTransformerProtocol>
{
    id <YTEntityStore> _entityStore;
    _Bool _isIPad;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateTriggers:(id)arg1 forInputEntity:(id)arg2 outputEntityKey:(id)arg3;
- (id)transformEntity:(id)arg1 toEntityWithKey:(id)arg2;
- (_Bool)canTransformEntityWithContentID:(id)arg1;
@property(readonly) Class outputEntityClass;
@property(readonly) long long outputEntityFieldNumber;
@property(readonly) long long inputEntityFieldNumber;
@property(readonly) long long priority;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

