//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCutSameWorksManagerProtocol-Protocol.h"

@class ACCMVTemplateModel, NSString;

@interface ACCCutSameWorksManager : NSObject <ACCCutSameWorksManagerProtocol>
{
    ACCMVTemplateModel *_currrentTemplate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACCMVTemplateModel *currrentTemplate; // @synthesize currrentTemplate=_currrentTemplate;
- (void)clearTemplateZip;
- (void)clearCache;
- (void)cancelCurrentTask;
- (void)importWorksAssetModel:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reprocessTemplate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

