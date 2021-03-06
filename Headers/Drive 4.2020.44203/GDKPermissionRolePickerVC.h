//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/QTMCollectionViewController.h>

@class GDKPermission, GOOCheckboxContentViewObject;
@protocol GDKAlertControlling, GDKFile, GDKLinkSharingCVOProtocol, GDKPermissionRolePickerVCDelegate;

@interface GDKPermissionRolePickerVC : QTMCollectionViewController
{
    _Bool _isPublishedLinkSharing;
    _Bool _shouldShowAtariMenuOptions;
    id <GDKLinkSharingCVOProtocol> _permissionCVO;
    id <GDKFile> _file;
    GOOCheckboxContentViewObject *_cvoForCurrentRole;
    id <GDKPermissionRolePickerVCDelegate> _delegate;
    id <GDKAlertControlling> _alertController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowAtariMenuOptions; // @synthesize shouldShowAtariMenuOptions=_shouldShowAtariMenuOptions;
@property(nonatomic) _Bool isPublishedLinkSharing; // @synthesize isPublishedLinkSharing=_isPublishedLinkSharing;
@property(readonly, nonatomic) id <GDKAlertControlling> alertController; // @synthesize alertController=_alertController;
@property(nonatomic) __weak id <GDKPermissionRolePickerVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GOOCheckboxContentViewObject *cvoForCurrentRole; // @synthesize cvoForCurrentRole=_cvoForCurrentRole;
@property(retain, nonatomic) id <GDKFile> file; // @synthesize file=_file;
@property(retain, nonatomic) id <GDKLinkSharingCVOProtocol> permissionCVO; // @synthesize permissionCVO=_permissionCVO;
- (void)displayChangePermissionDialogWithAction:(CDUnknownBlockType)arg1;
- (id)displayTextForRoleOption:(long long)arg1;
- (id)publishedViewerCVOsForPermission:(id)arg1 checked:(_Bool)arg2;
- (id)draftSiteCVOsForPermission:(id)arg1 checked:(_Bool)arg2;
- (id)checkboxCVOForRole:(long long)arg1 checked:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)createModelWithTitle:(id)arg1 roleOptions:(id)arg2 permission:(id)arg3;
@property(readonly, nonatomic) GDKPermission *draftPermission;
@property(readonly, nonatomic) GDKPermission *permission;
- (id)initWithTitle:(id)arg1 roleOptions:(id)arg2 permissionCVO:(id)arg3 file:(id)arg4 isPublishedLinkSharing:(_Bool)arg5 delegate:(id)arg6 alertController:(id)arg7;

@end

