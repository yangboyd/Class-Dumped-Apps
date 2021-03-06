//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewModel.h"

@class GOOTextContentViewObject, SKTContactContentViewObject, SKTContactsDataManager, SKTDisplayOptions;
@protocol SKTContactsCollectionViewModelDelegate, SKTInteractionLogger;

@interface SKTContactsCollectionViewModel : QTMCollectionViewModel
{
    SKTContactsDataManager *_contactsDataManager;
    id <SKTInteractionLogger> _interactionLogger;
    SKTDisplayOptions *_displayOptions;
    SKTContactContentViewObject *_expandedContentViewObject;
    GOOTextContentViewObject *_objectForShowDeviceContacts;
    GOOTextContentViewObject *_objectForNoContacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOTextContentViewObject *objectForNoContacts; // @synthesize objectForNoContacts=_objectForNoContacts;
@property(retain, nonatomic) GOOTextContentViewObject *objectForShowDeviceContacts; // @synthesize objectForShowDeviceContacts=_objectForShowDeviceContacts;
@property(retain, nonatomic) SKTContactContentViewObject *expandedContentViewObject; // @synthesize expandedContentViewObject=_expandedContentViewObject;
@property(retain, nonatomic) SKTDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property(readonly, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) SKTContactsDataManager *contactsDataManager; // @synthesize contactsDataManager=_contactsDataManager;
- (id)contactAtIndexPath:(id)arg1;
- (id)contentViewObjectsForContacts:(id)arg1 contactSource:(long long)arg2 colors:(id)arg3 colorOverrides:(id)arg4;
- (id)initWithDelegate:(id)arg1 contactsDataManager:(id)arg2 displayOptions:(id)arg3 analyticsProvider:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <SKTContactsCollectionViewModelDelegate> delegate; // @dynamic delegate;

@end

