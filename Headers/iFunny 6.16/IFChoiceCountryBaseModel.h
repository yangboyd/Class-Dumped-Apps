//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFChoiceCountryModel-Protocol.h>

@class NSArray;

@interface IFChoiceCountryBaseModel : NSObject <IFChoiceCountryModel>
{
    NSArray *_cachedCountries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedCountries; // @synthesize cachedCountries=_cachedCountries;
- (id)countries;

@end

