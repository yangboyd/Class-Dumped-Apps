//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface MGMMonogramFactory : NSObject
{
    UIFont *_cascadingFont;
}

+ (id)CJKScriptRegex;
@property(readonly, nonatomic) UIFont *cascadingFont; // @synthesize cascadingFont=_cascadingFont;
- (void).cxx_destruct;
- (_Bool)graphemeClusterCanBeCentered:(id)arg1;
- (_Bool)monogram:(id)arg1 canBeRenderedInFont:(const struct __CTFont *)arg2;
- (id)glyphSupportedDisplayMonogramForMonogram:(id)arg1 withCenteringSupport:(_Bool)arg2;
- (id)syntheticDisplayMonogramForGraphemeCluster:(id)arg1;
- (id)familyNameWithArticlesRemoved:(id)arg1;
- (id)renderableForName:(id)arg1;
- (id)monogramForName:(id)arg1;
- (id)initWithFont:(id)arg1;
- (id)init;

@end

