//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGShoppingProductTileDecorations : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showSaveButton;
    _Bool _showDismissButton;
    _Bool _showProfileOverlay;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool showProfileOverlay; // @synthesize showProfileOverlay=_showProfileOverlay;
@property(readonly, nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
@property(readonly, nonatomic) _Bool showSaveButton; // @synthesize showSaveButton=_showSaveButton;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithShowSaveButton:(_Bool)arg1 showDismissButton:(_Bool)arg2 showProfileOverlay:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

