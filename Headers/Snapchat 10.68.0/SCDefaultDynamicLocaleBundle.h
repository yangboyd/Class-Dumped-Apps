//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDynamicLocaleBundle-Protocol.h"

@class NSBundle, NSString;

@interface SCDefaultDynamicLocaleBundle : NSObject <SCDynamicLocaleBundle>
{
    NSBundle *_localeBundle;
    NSString *_bundlePath;
}

- (void).cxx_destruct;
- (id)_createLocaleBundle;
- (_Bool)containsLocale:(id)arg1;
- (_Bool)persistLocaleFiles:(id)arg1 forLocale:(id)arg2;
- (id)initWithBundlePath:(id)arg1;

@end

