//
//  CCCarouselViewController.h
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-30.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCCarouselView;

@interface CCCarouselViewController : UIViewController
<
CCCarouselViewDelegate,
CCCarouselViewDataSource
>
{
    CCCarouselView *carouselView_;
}
@property (nonatomic, retain) IBOutlet CCCarouselView *carouselView;
@end
