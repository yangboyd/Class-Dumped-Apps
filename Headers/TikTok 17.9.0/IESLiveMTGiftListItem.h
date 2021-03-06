//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTCollectionViewItemProtocol-Protocol.h"

@class IESLiveMTGiftItemCollectionLayout, IESLiveMTGiftItemCollectionViewModel, IESLiveMTGiftPanelDataSharing, NSArray, NSString, RACCommand, RACSignal;
@protocol IESLiveMTGiftPanelReaction, IESLiveSettings;

@interface IESLiveMTGiftListItem : NSObject <IESLiveMTCollectionViewItemProtocol>
{
    _Bool _enable;
    Class _cellClass;
    id <IESLiveMTGiftPanelReaction> _reaction;
    NSArray *_collectionViewModelList;
    IESLiveMTGiftItemCollectionViewModel *_currentCollectionViewModel;
    IESLiveMTGiftItemCollectionLayout *_giftCollectionLayout;
    unsigned long long _currentPageType;
    RACSignal *_selectionSignal;
    IESLiveMTGiftPanelDataSharing *_giftPanelDataSharing;
    CDUnknownBlockType _showToast;
    CDUnknownBlockType _updateGiftListCell;
    CDUnknownBlockType _removeGuideGesture;
    RACCommand *_sendGiftCmd;
    RACCommand *_endSendGiftCmd;
    id <IESLiveSettings> _settings;
    struct CGSize _cellSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) RACCommand *endSendGiftCmd; // @synthesize endSendGiftCmd=_endSendGiftCmd;
@property(retain, nonatomic) RACCommand *sendGiftCmd; // @synthesize sendGiftCmd=_sendGiftCmd;
@property(copy, nonatomic) CDUnknownBlockType removeGuideGesture; // @synthesize removeGuideGesture=_removeGuideGesture;
@property(copy, nonatomic) CDUnknownBlockType updateGiftListCell; // @synthesize updateGiftListCell=_updateGiftListCell;
@property(copy, nonatomic) CDUnknownBlockType showToast; // @synthesize showToast=_showToast;
@property(retain, nonatomic) IESLiveMTGiftPanelDataSharing *giftPanelDataSharing; // @synthesize giftPanelDataSharing=_giftPanelDataSharing;
@property(readonly, nonatomic) RACSignal *selectionSignal; // @synthesize selectionSignal=_selectionSignal;
@property(readonly, nonatomic) unsigned long long currentPageType; // @synthesize currentPageType=_currentPageType;
@property(readonly, nonatomic) IESLiveMTGiftItemCollectionLayout *giftCollectionLayout; // @synthesize giftCollectionLayout=_giftCollectionLayout;
@property(readonly, nonatomic) IESLiveMTGiftItemCollectionViewModel *currentCollectionViewModel; // @synthesize currentCollectionViewModel=_currentCollectionViewModel;
@property(readonly, nonatomic) NSArray *collectionViewModelList; // @synthesize collectionViewModelList=_collectionViewModelList;
@property(nonatomic) __weak id <IESLiveMTGiftPanelReaction> reaction; // @synthesize reaction=_reaction;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void)removeGiftGesture;
- (void)didGiftPanelCollectionVMsUpdate;
- (id)itemViewModelWithPageType:(unsigned long long)arg1;
- (id)selectedCollectionViewModel;
- (id)selectedItem;
- (void)p_endSendGift;
- (void)p_sendGift;
- (void)p_createSendGiftCommand;
- (void)p_showGiftPrompt;
- (void)p_bindSignal;
- (id)initWithGiftPanelDataSharing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RACCommand *didSelectItemCommand;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

