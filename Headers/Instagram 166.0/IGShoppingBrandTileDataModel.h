//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class IGShoppingTextDataModel, IGUser, NSArray, NSString;

@interface IGShoppingBrandTileDataModel : FBValueObject <NSCopying, NSCoding>
{
    IGUser *_merchant;
    NSString *_contextInfo;
    IGShoppingTextDataModel *_subtitle;
    NSArray *_productItems;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *productItems; // @synthesize productItems=_productItems;
@property(readonly, copy, nonatomic) IGShoppingTextDataModel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(readonly, copy, nonatomic) IGUser *merchant; // @synthesize merchant=_merchant;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMerchant:(id)arg1 contextInfo:(id)arg2 subtitle:(id)arg3 productItems:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

