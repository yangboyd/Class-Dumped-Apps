//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEUserModel, NSNumber;

@interface AWEProfileEditResponseModel : AWEBaseApiModel
{
    AWEUserModel *_user;
    NSNumber *_toastBack;
}

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *toastBack; // @synthesize toastBack=_toastBack;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;

@end

