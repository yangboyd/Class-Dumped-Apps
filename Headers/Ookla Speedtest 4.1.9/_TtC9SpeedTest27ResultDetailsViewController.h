//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s5Gauge20ThemedViewControllerCN.h"

@class NSLayoutConstraint, UIButton, UILabel, UIScrollView, UIStackView, _TtC5Gauge17ProgressGraphView, _TtC5Gauge17RenderedImageView, _TtC5Gauge27DetailsResultDisplayViewiOS, _TtC9SpeedTest10RatingView;

@interface _TtC9SpeedTest27ResultDetailsViewController : _$s5Gauge20ThemedViewControllerCN
{
    // Error parsing type: , name: pingResult
    // Error parsing type: , name: jitterResult
    // Error parsing type: , name: packetLossResult
    // Error parsing type: , name: connectionResultsStackView
    // Error parsing type: , name: headerStackView
    // Error parsing type: , name: date
    // Error parsing type: , name: noteButton
    // Error parsing type: , name: noteLabel
    // Error parsing type: , name: downloadResult
    // Error parsing type: , name: downloadBytes
    // Error parsing type: , name: downloadGraph
    // Error parsing type: , name: downloadAndGraphStackView
    // Error parsing type: , name: uploadResult
    // Error parsing type: , name: uploadBytes
    // Error parsing type: , name: uploadGraph
    // Error parsing type: , name: uploadAndGraphStackView
    // Error parsing type: , name: graphHeights
    // Error parsing type: , name: bottomContainer
    // Error parsing type: , name: userLocationStackView
    // Error parsing type: , name: ispHostStackView
    // Error parsing type: , name: hostIcon
    // Error parsing type: , name: hostName
    // Error parsing type: , name: hostLabel
    // Error parsing type: , name: hostStackView
    // Error parsing type: , name: ispIcon
    // Error parsing type: , name: networkName
    // Error parsing type: , name: ispName
    // Error parsing type: , name: ispStackView
    // Error parsing type: , name: ratingView
    // Error parsing type: , name: userLocationIcon
    // Error parsing type: , name: userLocationTitle
    // Error parsing type: , name: userLocation
    // Error parsing type: , name: userLocationDetailsStackView
    // Error parsing type: , name: containerStackView
    // Error parsing type: , name: containerScrollView
    // Error parsing type: , name: externalIp
    // Error parsing type: , name: internalIp
    // Error parsing type: , name: ipStackView
    // Error parsing type: , name: viewOnMap
    // Error parsing type: , name: noteIcon
    // Error parsing type: , name: threadingTypeContainer
    // Error parsing type: , name: threadingTypeIcon
    // Error parsing type: , name: threadingTypeConnectionsLabel
    // Error parsing type: , name: threadingTypeLabel
    // Error parsing type: , name: result
    // Error parsing type: , name: observers
    // Error parsing type: , name: resultFormatter
    // Error parsing type: , name: noteLabelTapGesture
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteTapped:(id)arg1;
- (void)deleteResult:(id)arg1;
- (void)shareResult:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak UILabel *threadingTypeLabel; // @synthesize threadingTypeLabel;
@property(nonatomic) __weak UILabel *threadingTypeConnectionsLabel; // @synthesize threadingTypeConnectionsLabel;
@property(nonatomic) __weak _TtC5Gauge17RenderedImageView *threadingTypeIcon; // @synthesize threadingTypeIcon;
@property(nonatomic) __weak UIStackView *threadingTypeContainer; // @synthesize threadingTypeContainer;
@property(nonatomic) __weak _TtC5Gauge17RenderedImageView *noteIcon; // @synthesize noteIcon;
@property(nonatomic) __weak UIButton *viewOnMap; // @synthesize viewOnMap;
@property(nonatomic) __weak UIStackView *ipStackView; // @synthesize ipStackView;
@property(nonatomic) __weak UILabel *internalIp; // @synthesize internalIp;
@property(nonatomic) __weak UILabel *externalIp; // @synthesize externalIp;
@property(nonatomic) __weak UIScrollView *containerScrollView; // @synthesize containerScrollView;
@property(nonatomic) __weak UIStackView *containerStackView; // @synthesize containerStackView;
@property(nonatomic) __weak UIStackView *userLocationDetailsStackView; // @synthesize userLocationDetailsStackView;
@property(nonatomic) __weak UIButton *userLocation; // @synthesize userLocation;
@property(nonatomic) __weak UILabel *userLocationTitle; // @synthesize userLocationTitle;
@property(nonatomic) __weak _TtC5Gauge17RenderedImageView *userLocationIcon; // @synthesize userLocationIcon;
@property(nonatomic) __weak _TtC9SpeedTest10RatingView *ratingView; // @synthesize ratingView;
@property(nonatomic) __weak UIStackView *ispStackView; // @synthesize ispStackView;
@property(nonatomic) __weak UILabel *ispName; // @synthesize ispName;
@property(nonatomic) __weak UILabel *networkName; // @synthesize networkName;
@property(nonatomic) __weak _TtC5Gauge17RenderedImageView *ispIcon; // @synthesize ispIcon;
@property(nonatomic) __weak UIStackView *hostStackView; // @synthesize hostStackView;
@property(nonatomic) __weak UILabel *hostLabel; // @synthesize hostLabel;
@property(nonatomic) __weak UILabel *hostName; // @synthesize hostName;
@property(nonatomic) __weak _TtC5Gauge17RenderedImageView *hostIcon; // @synthesize hostIcon;
@property(nonatomic) __weak UIStackView *ispHostStackView; // @synthesize ispHostStackView;
@property(nonatomic) __weak UIStackView *userLocationStackView; // @synthesize userLocationStackView;
@property(nonatomic) __weak UIStackView *bottomContainer; // @synthesize bottomContainer;
@property(nonatomic) __weak NSLayoutConstraint *graphHeights; // @synthesize graphHeights;
@property(nonatomic) __weak UIStackView *uploadAndGraphStackView; // @synthesize uploadAndGraphStackView;
@property(nonatomic) __weak _TtC5Gauge17ProgressGraphView *uploadGraph; // @synthesize uploadGraph;
@property(nonatomic) __weak UILabel *uploadBytes; // @synthesize uploadBytes;
@property(nonatomic) __weak _TtC5Gauge27DetailsResultDisplayViewiOS *uploadResult; // @synthesize uploadResult;
@property(nonatomic) __weak UIStackView *downloadAndGraphStackView; // @synthesize downloadAndGraphStackView;
@property(nonatomic) __weak _TtC5Gauge17ProgressGraphView *downloadGraph; // @synthesize downloadGraph;
@property(nonatomic) __weak UILabel *downloadBytes; // @synthesize downloadBytes;
@property(nonatomic) __weak _TtC5Gauge27DetailsResultDisplayViewiOS *downloadResult; // @synthesize downloadResult;
@property(nonatomic) __weak UILabel *noteLabel; // @synthesize noteLabel;
@property(nonatomic) __weak UIButton *noteButton; // @synthesize noteButton;
@property(nonatomic) __weak UILabel *date; // @synthesize date;
@property(nonatomic) __weak UIStackView *headerStackView; // @synthesize headerStackView;
@property(nonatomic) __weak UIStackView *connectionResultsStackView; // @synthesize connectionResultsStackView;
@property(nonatomic) __weak _TtC5Gauge27DetailsResultDisplayViewiOS *packetLossResult; // @synthesize packetLossResult;
@property(nonatomic) __weak _TtC5Gauge27DetailsResultDisplayViewiOS *jitterResult; // @synthesize jitterResult;
@property(nonatomic) __weak _TtC5Gauge27DetailsResultDisplayViewiOS *pingResult; // @synthesize pingResult;

@end

