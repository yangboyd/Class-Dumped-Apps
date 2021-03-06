//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEntityStoreObserver-Protocol.h"

@class GIMMe, NSString, YTDownloadsPlatformElementsController;
@protocol YTInMemoryEntityStore;

@interface YTDownloadQualityPickerController : NSObject <YTEntityStoreObserver>
{
    NSString *_pickerEntityKey;
    id <YTInMemoryEntityStore> _inMemoryEntityStore;
    YTDownloadsPlatformElementsController *_downloadsPlatformElementsController;
    CDUnknownBlockType _callbackBlock;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)pickerEntityKey;
- (CDUnknownBlockType)callbackBlock;
- (void)cleanUpEntityWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)createComponentModelWithPickerProto:(id)arg1;
- (id)pickerProtoForOfflineabilityRenderer:(id)arg1 savedQualityIndex:(long long)arg2 rememberSettingsChecked:(_Bool)arg3;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)updateContentSizes:(id)arg1;
- (void)presentPickerDialogWithFirstResponder:(id)arg1 initialRememberSettings:(_Bool)arg2 initialQualityIndex:(long long)arg3 offlineabilityRenderer:(id)arg4;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

