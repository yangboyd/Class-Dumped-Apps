//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class NSMutableArray;

@interface ASTThirdPartySettingsUIAdapter : ASTSettingsUIAdapter
{
    NSMutableArray *_menuItems;
}

- (void).cxx_destruct;
- (void)onLinkAccountDoneWithItem:(id)arg1 isSuccess:(_Bool)arg2 resultMessage:(id)arg3;
- (void)linkAccountWithItem:(id)arg1;
- (void)unlinkAccountWithItem:(id)arg1;
- (void)didTapLinkOrUnlinkButton:(id)arg1;
- (id)detailsViewControllerForItem:(id)arg1;
- (id)settingsFilter;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;

@end

