//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCDynamicLocaleProvider;

@interface SCDynamicLocaleProviderServices : NSObject
{
    id <SCDynamicLocaleProvider> _dynamicLocaleProvider;
}

@property(readonly, nonatomic) id <SCDynamicLocaleProvider> dynamicLocaleProvider; // @synthesize dynamicLocaleProvider=_dynamicLocaleProvider;
- (void).cxx_destruct;
- (id)initWithDynamicLocaleProvider:(id)arg1;

@end

