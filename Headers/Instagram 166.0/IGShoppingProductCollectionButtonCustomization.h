//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGShoppingCustomizationColors;

@interface IGShoppingProductCollectionButtonCustomization : FBValueObject <NSCopying, NSCoding>
{
    IGShoppingCustomizationColors *_colors;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingCustomizationColors *colors; // @synthesize colors=_colors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithColors:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

