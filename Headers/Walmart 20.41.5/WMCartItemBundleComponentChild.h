//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSArray, NSString, NSURL;
@protocol WMCartItemVariant;

@interface WMCartItemBundleComponentChild : SDModelObject
{
    NSString *_itemId;
    NSString *_itemName;
    NSString *_imageThumbnailPath;
    NSString *_itemImage150Path;
    NSArray<WMCartItemVariant> *_variants;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray<WMCartItemVariant> *variants; // @synthesize variants=_variants;
@property(copy, nonatomic) NSString *itemImage150Path; // @synthesize itemImage150Path=_itemImage150Path;
@property(copy, nonatomic) NSString *imageThumbnailPath; // @synthesize imageThumbnailPath=_imageThumbnailPath;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (id)formattedBundleChildDescription:(unsigned long long)arg1;
- (id)formattedVariantsDescription:(unsigned long long)arg1;
@property(readonly, nonatomic) NSURL *imageURL;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

