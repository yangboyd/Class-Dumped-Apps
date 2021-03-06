//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class ASTDeviceSetting, ASTMenuSelectionStreamItem;
@protocol ASTDeviceInfoProvider;

@interface ASTDeviceSettingsMultipleStringsUIAdapter : ASTSettingsUIAdapter
{
    ASTMenuSelectionStreamItem *_selectedItem;
    ASTMenuSelectionStreamItem *_previouslySelectedItem;
    id <ASTDeviceInfoProvider> _deviceInfoProvider;
    ASTDeviceSetting *_multipleStringsDeviceSetting;
}

- (void).cxx_destruct;
- (void)menuStreamController:(id)arg1 didUpdateItem:(id)arg2;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)menuSectionsForSettings:(id)arg1;
- (id)initWithSettingsService:(id)arg1 deviceInfoProvider:(id)arg2 multipleStringsDeviceSetting:(id)arg3;

@end

