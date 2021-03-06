//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectSaveSelfieStickerServiceListener-Protocol.h>

@class IGDirectSaveSelfieStickerService, IGLabelItemViewModel, IGSpinnerLabelViewModel, NSString;
@protocol IGDirectSavedSelfieStickerDataSourceDelegate;

@interface IGDirectSavedSelfieStickerDataSource : NSObject <IGDirectSaveSelfieStickerServiceListener>
{
    IGSpinnerLabelViewModel *_loadingSpinner;
    IGLabelItemViewModel *_stickerLabelModel;
    IGDirectSaveSelfieStickerService *_saveSelfieStickerService;
    id <IGDirectSavedSelfieStickerDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectSavedSelfieStickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setUpLoading;
- (void)saveSelfieStickerServiceDidUpdateSelfieStickers;
- (void)saveSelfieStickerServiceDidFailToUnsave;
- (void)saveSelfieStickerServiceDidFailToSave;
- (void)saveSelfieStickerServiceDidSave;
- (void)stop;
- (void)start;
- (id)initWithUserPk:(id)arg1 networker:(id)arg2 saveSelfieStickerService:(id)arg3 titleColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

