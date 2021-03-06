//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>

@interface IGShoppingHomePersistedPlaceholderSection : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    _Bool _spotlightTileHScroll_hasHeader;
    _Bool _shopsTray_hasHeader;
    long long _contentTileVScroll_contentTileCount;
    _Bool _contentTileVScroll_hasHeader;
    long long _productGrid_productCount;
    _Bool _productGrid_hasHeader;
    long long _guideGrid_guideCount;
}

+ (id)spotlightTileHScrollWithHasHeader:(_Bool)arg1;
+ (id)shortcutTiles;
+ (id)shortcutButtonHScroll;
+ (id)shopsTrayWithHasHeader:(_Bool)arg1;
+ (id)productGridWithProductCount:(long long)arg1 hasHeader:(_Bool)arg2;
+ (id)guideGridWithGuideCount:(long long)arg1;
+ (id)contentTileVScrollWithContentTileCount:(long long)arg1 hasHeader:(_Bool)arg2;
- (void)matchSpotlightTileHScroll:(CDUnknownBlockType)arg1 shopsTray:(CDUnknownBlockType)arg2 contentTileVScroll:(CDUnknownBlockType)arg3 productGrid:(CDUnknownBlockType)arg4 guideGrid:(CDUnknownBlockType)arg5 shortcutButtonHScroll:(CDUnknownBlockType)arg6 shortcutTiles:(CDUnknownBlockType)arg7;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

