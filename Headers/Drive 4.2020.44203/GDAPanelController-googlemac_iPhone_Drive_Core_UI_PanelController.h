//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDAPanelController.h"

#import "GDAPanelController-Protocol.h"
#import "OGLDrawerDelegate-Protocol.h"
#import "OGLItemListDataSource-Protocol.h"
#import "OGLItemListDelegate-Protocol.h"

@interface GDAPanelController (googlemac_iPhone_Drive_Core_UI_PanelController) <GDAPanelController, OGLItemListDataSource, OGLItemListDelegate, OGLDrawerDelegate>
- (void)setPanelHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isPanelHidden;
- (id)itemListViewController:(id)arg1 itemAtIndexPath:(id)arg2;
- (long long)itemListViewController:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfItemSectionsInItemList:(id)arg1;
- (void)itemListViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)drawerDidDismiss:(id)arg1;
@end

