//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

#import "GDKAutoSizable-Protocol.h"
#import "GDKShareUserCVOProtocol-Protocol.h"

@class GDKPermission, NSString, NSURL, UIImage;
@protocol GDKAutoSizablePresenter, GDKContact, GDKShareUserCVODelegate, GDKShareUserCVOUpdateDelegate;

@interface GDKTemakiShareUserCVO : GOOBaseContentViewObject <GDKAutoSizable, GDKShareUserCVOProtocol>
{
    _Bool _enabled;
    _Bool _allowsChange;
    _Bool _updating;
    _Bool _isFolder;
    _Bool _isTeamDriveItem;
    id <GDKAutoSizablePresenter> _autoSizablePresenter;
    id <GDKShareUserCVODelegate> _delegate;
    id <GDKShareUserCVOUpdateDelegate> _updateDelegate;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_avatarURL;
    GDKPermission *_permission;
    NSString *_metadata;
    id <GDKContact> _contact;
    UIImage *_avatar;
    NSString *_warningText;
}

@property(readonly, copy, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(readonly, nonatomic) _Bool isTeamDriveItem; // @synthesize isTeamDriveItem=_isTeamDriveItem;
@property(readonly, nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(readonly, nonatomic) _Bool allowsChange; // @synthesize allowsChange=_allowsChange;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) id <GDKContact> contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) GDKPermission *permission; // @synthesize permission=_permission;
@property(readonly, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <GDKShareUserCVOUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <GDKShareUserCVODelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GDKAutoSizablePresenter> autoSizablePresenter; // @synthesize autoSizablePresenter=_autoSizablePresenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long heightCacheHash;
@property(readonly, nonatomic) NSString *heightCacheKey;
- (id)nonBindingContentView;
- (void)setAvatar:(id)arg1 animated:(_Bool)arg2;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 metadata:(id)arg3 avatarURL:(id)arg4 permission:(id)arg5 allowsChange:(_Bool)arg6 warningText:(id)arg7 isFolder:(_Bool)arg8 isTeamDriveItem:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

