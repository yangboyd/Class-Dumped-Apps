//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTMenuStreamSingleSelectionControllerDelegate-Protocol.h"

@class ASTMenuStreamSingleSelectionController, NSMutableArray, NSString;

@interface ASTCommuteSettingsUIAdapter : ASTSettingsUIAdapter <ASTMenuStreamSingleSelectionControllerDelegate>
{
    ASTMenuStreamSingleSelectionController *_workCommuteSettingsController;
    ASTMenuStreamSingleSelectionController *_defaultCommuteSettingsController;
    NSMutableArray *_menuItems;
}

- (void).cxx_destruct;
- (id)selectionControllerWithSelectedMode:(int)arg1;
- (void)addTextStreamItemWithTitle:(id)arg1;
- (void)singleSelectionController:(id)arg1 didChangeSelectionWithSelectedItem:(id)arg2 deselectedItem:(id)arg3;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)settingsFilter;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

