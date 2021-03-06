//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray, NSMutableDictionary;

@interface IGSettingsAdsModel : NSObject
{
    NSArray *_adsData;
    NSArray *_rowTypes;
    NSMutableDictionary *_stringToRowTypeDictionary;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)rowTypeForTitleString:(id)arg1;
- (id)adsTextArray;
- (long long)rowCount;
- (long long)adsRowForRow:(long long)arg1;
- (id)textForRow:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

@end

