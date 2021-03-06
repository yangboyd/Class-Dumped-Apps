//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TikTokKidsSettingViewModelProtocol-Protocol.h"

@class NSArray, NSString;
@protocol TikTokKidsSettingBaseViewModelDelegate;

@interface TikTokKidsSettingBaseViewModel : NSObject <TikTokKidsSettingViewModelProtocol>
{
    id <TikTokKidsSettingBaseViewModelDelegate> _controllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TikTokKidsSettingBaseViewModelDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void)viewDidDisapper;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)refreshAllCells;
- (id)itemModelWithType:(long long)arg1;
@property(retain, nonatomic) NSArray *sectionDataArray; // @dynamic sectionDataArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

