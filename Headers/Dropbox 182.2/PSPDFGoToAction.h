//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFAction.h>

@interface PSPDFGoToAction : PSPDFAction
{
    unsigned long long _pageIndex;
}

+ (id)skipKeysForHashing;
+ (id)propertyKeys;
- (unsigned long long)pageIndexWithDocumentProvider:(id)arg1;
- (id)localizedDescriptionWithDocumentProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)initWithPageIndex:(unsigned long long)arg1;
- (id)init;

@end

