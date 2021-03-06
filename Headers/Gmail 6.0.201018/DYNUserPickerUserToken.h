//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOToken.h"

#import "GSCImageViewDelegate-Protocol.h"

@class DYNAvatarView, NSString;
@protocol DYNColorSchemeService, DYNMember;

@interface DYNUserPickerUserToken : GOOToken <GSCImageViewDelegate>
{
    id <DYNColorSchemeService> _colorSchemeService;
    DYNAvatarView *_imageView;
    id <DYNMember> _member;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <DYNMember> member; // @synthesize member=_member;
- (id)clearColorImage;
- (void)loadAvatarUrl:(id)arg1;
- (void)loadingStateChanged:(id)arg1;
- (id)initWithMember:(id)arg1 isGuestUser:(_Bool)arg2 showEmailOnly:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

